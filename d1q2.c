#define HASH_SIZE 10007 // A prime number works best

struct Node {
    int val;
    int index;
    struct Node* next;
};

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    struct Node* hashTable[HASH_SIZE] = {NULL};
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        // Find complement in hash table
        int key = abs(complement) % HASH_SIZE;
        struct Node* temp = hashTable[key];
        while (temp) {
            if (temp->val == complement) {
                result[0] = temp->index;
                result[1] = i;
                return result;
            }
            temp = temp->next;
        }

        // Add current number to hash table
        key = abs(nums[i]) % HASH_SIZE;
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->val = nums[i];
        newNode->index = i;
        newNode->next = hashTable[key];
        hashTable[key] = newNode;
    }
    return result;
}
