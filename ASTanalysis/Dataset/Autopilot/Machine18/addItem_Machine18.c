int list_add_item_at_pos(node **head, char *item_name, float price, int quantity, unsigned int pos) {
  if (head == NULL) {
    printf("Error: list is empty\n");
    return EXIT_FAILURE;
  }
  node *current = *head;
  if (pos == 1) {
    current->quantity += quantity;
    current->price += (price * quantity);
  } else {
    int i = 1;
    while (current != NULL && i < pos) {
      current = current->next;
      i++;
    }
    current->quantity += quantity;
    current->price += (price * quantity);
  }
  return EXIT_SUCCESS;
}