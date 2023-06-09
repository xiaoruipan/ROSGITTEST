// Generated by gencpp from file vmxpi_ros/UniqueID.msg
// DO NOT EDIT!


#ifndef VMXPI_ROS_MESSAGE_UNIQUEID_H
#define VMXPI_ROS_MESSAGE_UNIQUEID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vmxpi_ros
{
template <class ContainerAllocator>
struct UniqueID_
{
  typedef UniqueID_<ContainerAllocator> Type;

  UniqueID_()
    : word1()
    , word2()
    , word3()  {
    }
  UniqueID_(const ContainerAllocator& _alloc)
    : word1(_alloc)
    , word2(_alloc)
    , word3(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _word1_type;
  _word1_type word1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _word2_type;
  _word2_type word2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _word3_type;
  _word3_type word3;





  typedef boost::shared_ptr< ::vmxpi_ros::UniqueID_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vmxpi_ros::UniqueID_<ContainerAllocator> const> ConstPtr;

}; // struct UniqueID_

typedef ::vmxpi_ros::UniqueID_<std::allocator<void> > UniqueID;

typedef boost::shared_ptr< ::vmxpi_ros::UniqueID > UniqueIDPtr;
typedef boost::shared_ptr< ::vmxpi_ros::UniqueID const> UniqueIDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vmxpi_ros::UniqueID_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vmxpi_ros::UniqueID_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vmxpi_ros::UniqueID_<ContainerAllocator1> & lhs, const ::vmxpi_ros::UniqueID_<ContainerAllocator2> & rhs)
{
  return lhs.word1 == rhs.word1 &&
    lhs.word2 == rhs.word2 &&
    lhs.word3 == rhs.word3;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vmxpi_ros::UniqueID_<ContainerAllocator1> & lhs, const ::vmxpi_ros::UniqueID_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vmxpi_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vmxpi_ros::UniqueID_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vmxpi_ros::UniqueID_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vmxpi_ros::UniqueID_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3fe5a40e07321a3fd3e3e35d9b0c93b";
  }

  static const char* value(const ::vmxpi_ros::UniqueID_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3fe5a40e07321a3ULL;
  static const uint64_t static_value2 = 0xfd3e3e35d9b0c93bULL;
};

template<class ContainerAllocator>
struct DataType< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vmxpi_ros/UniqueID";
  }

  static const char* value(const ::vmxpi_ros::UniqueID_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string word1\n"
"string word2\n"
"string word3\n"
;
  }

  static const char* value(const ::vmxpi_ros::UniqueID_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.word1);
      stream.next(m.word2);
      stream.next(m.word3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UniqueID_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vmxpi_ros::UniqueID_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vmxpi_ros::UniqueID_<ContainerAllocator>& v)
  {
    s << indent << "word1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.word1);
    s << indent << "word2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.word2);
    s << indent << "word3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.word3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VMXPI_ROS_MESSAGE_UNIQUEID_H
