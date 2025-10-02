class Main {
  int myNumber = 5;

  int add3() {
    return this.myNumber += 3;
  }
  public static void main(String[] args) {

    String hello = "Hello";
    String helloNew = new String("Hello");
    // String helloEmpty = new String(); // ""
    String helloEmpty;
    helloEmpty = "assignment";

    System.out.println("my string equals:" + helloEmpty + " and it's length is " + helloEmpty.length());

    // if(hello.equals(helloNew)) {
    //   System.out.println("They are equal");
    // } else {
    //   System.out.println("Not equal");
    // }
  }
}

