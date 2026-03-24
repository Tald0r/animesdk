#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"

class Class_0_16E4307DCC419505_230;
class Class_0_16E4307DCC419505_231;
class Class_0_16E4307DCC419505_272;
class Class_2_A636361CDC778646;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define CLASS_2_0E6782FB3DF6E444_METHOD_2_0C34A00F292A96C3_OFFSET UNITYSDK_OFFSET(0x6F7F890)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x6F7FD30)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_3DA085EC8F67F5B7_OFFSET UNITYSDK_OFFSET(0x6F800F0)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x6F80070)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0x6F7FF90)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_9915273131ACA21E_OFFSET UNITYSDK_OFFSET(0x6F7F6E0)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x6F7FF20)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x6F80000)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x6F7FEA0)
#define CLASS_2_0E6782FB3DF6E444_METHOD_2_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x6F7FF10)
#define CLASS_2_0E6782FB3DF6E444_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x6F7F160)
#define CLASS_2_0E6782FB3DF6E444__CTOR_OFFSET UNITYSDK_OFFSET(0x6F7FE90)

inline static constexpr unsigned int Class_2_0E6782FB3DF6E444_TypeDefinitionIndex = 62694;

class Class_2_0E6782FB3DF6E444 : public ::Class_1_3979F23DE6A08606
{
public:
	::Cinemachine::CinemachineComposer* Field_2_2; // 0x10
	::MoleMole::Cameras::CameraDataAccessor* Field_2_3; // 0x18
	::MoleMole::Config::ConfigCameraComposer* Field_2_4; // 0x20
	::System::Action* Field_2_5; // 0x28
	::Class_2_A636361CDC778646* Field_2_1; // 0x30
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_9915273131ACA21E(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_9915273131ACA21E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C34A00F292A96C3(::Class_0_16E4307DCC419505_231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_231*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_0C34A00F292A96C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_272* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_F011FE82F2197681_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_231*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_272* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}

	::Cinemachine::CinemachineComposer* Method_2_3DA085EC8F67F5B7()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E6782FB3DF6E444_METHOD_2_3DA085EC8F67F5B7_OFFSET))(this);
	}
};
