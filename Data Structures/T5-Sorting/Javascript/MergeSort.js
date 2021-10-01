const mergeSortedArrays = (arr1, arr2) => {
  let finalArr = [];
  let p1 = 0,
    p2 = 0;
  while (p1 < arr1.length && p2 < arr2.length) {
    if (arr1[p1] < arr2[p2]) {
      finalArr.push(arr1[p1]);
      p1++;
    } else {
      finalArr.push(arr2[p2]);
      p2++;
    }
  }
  while (p1 < arr1.length) {
    finalArr.push(arr1[p1]);
    p1++;
  }
  while (p2 < arr2.length) {
    finalArr.push(arr2[p2]);
    p2++;
  }
  return finalArr;
};

const mergeSort = (arr) => {
  if (arr.length <= 1) return arr;
  let mid = Math.floor((arr.length - 1) / 2);
  let arr1 = arr.slice(0, mid + 1);
  let arr2 = arr.slice(mid + 1);
  return mergeSortedArrays(mergeSort(arr1), mergeSort(arr2));
};

//Time Complexity - O(nlog(n))
//Space Complexity - O(nlog(n))

const array = [
  27,
  7,
  43,
  9,
  98,
  1,
  25,
  3,
  92,
  98,
  56,
  -1,
  -12,
  -15,
  983,
  63,
  54,
];

console.log(mergeSort(array));
