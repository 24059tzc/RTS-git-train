/**
 ******************************************************************************
 * @file
 * @author  xtc
 * @date    2023.06.21
 * @brief
 ******************************************************************************
 * @attent  请大家完善函数内的内容
 * @myNote
 ******************************************************************************
 */
#include <stdint.h>
#include <stdarg.h>

uint8_t send_frame[10];

/** @brief  发送简单帧
  * @param  引入stdarg.h，解决可变参数问题，...作为占位符
            id : 变量编号
            target_value : 需要修改为的值
  * @example SendSimpleFrame(2, 123);
             SendSimpleFrame(1, 3.14);
*/
void SendSimpleFrame(uint8_t id, ...)
{
  send_frame[0] = 0x7E;
  /***
   * Coding here
   ***/
  send_frame[9] = 0x30;

  // 最后是底层发送函数，假设已经实现
}

/** @brief  接收处理简单帧
  * @param
            recv_frame : 接收帧存放的数组指针
            len : 帧长
*/
void SimpleFrameHandler(uint8_t *recv_frame, uint16_t len)
{
  /***
   * Coding here
   ***/
}