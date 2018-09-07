
// 快速排序算法：实现升序排列
// @param <必传 inputs> Array 待排序数据，数组类型
function quickSort(inputs) {
  if (inputs.length <= 1) {
    return
  }
  sort(inputs)
}

// 快速排序算法：内部实现
// @param <必传 inputs> Array 待排序数据，数组类型
// @param <非必 start> 待排序子数组的起始位置，递归时传入
// @param <非必 end> 待排序子数组的结束位置，递归时传入
function sort(inputs, start, end) {
  var x = start === undefined ? 0 : start
  var y = end === undefined ? inputs.length - 1 : end
  var n = y - x + 1
  if (n <= 1) {
    return
  }

  swap(inputs, x, rand(x, y)) // 选择 pivot

  var last = 0
  for (var i = 1; i < n; i++) { // 进行 partition
    if (inputs[x+i] < inputs[x]) {
      swap(inputs, x+(++last), x+i)
    }
  }
  var idx = x + last
  swap(inputs, x, idx) // 恢复 pivot
  sort(inputs, x, idx-1)
  sort(inputs, idx+1, y)
}

// 交换函数：辅助功能
function swap(arr, i, j) {
  if ( i === j) {
    return
  }
  var temp = arr[i]
  arr[i] = arr[j]
  arr[j] = temp
}

// 生成指定范围随机整数
function rand(min, max) {
  var range = max - min
  var rand = Math.random()
  return min + Math.round(rand * range)
}
