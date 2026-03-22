#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"

class Class_0_16E4307DCC419505_201;
class Class_0_16E4307DCC419505_202;
class Class_0_16E4307DCC419505_203;
class Class_2_A636361CDC778646;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Foundation { template <typename T> class AggregateObject_1; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System { class Action; }

#define CLASS_2_CD27CA279404D058_METHOD_2_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x6C26FF0)
#define CLASS_2_CD27CA279404D058_METHOD_2_3DA085EC8F67F5B7_OFFSET UNITYSDK_OFFSET(0x6C273E0)
#define CLASS_2_CD27CA279404D058_METHOD_2_50AF78C78C229325_OFFSET UNITYSDK_OFFSET(0x6C26970)
#define CLASS_2_CD27CA279404D058_METHOD_2_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x6C27180)
#define CLASS_2_CD27CA279404D058_METHOD_2_741DDF759DAB7138_OFFSET UNITYSDK_OFFSET(0x6C27280)
#define CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x6C272F0)
#define CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x6C27360)
#define CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x6C27210)
#define CLASS_2_CD27CA279404D058_METHOD_2_E7ACE86AF89160D5_OFFSET UNITYSDK_OFFSET(0x6C26B30)
#define CLASS_2_CD27CA279404D058_METHOD_2_F011FE82F2197681_OFFSET UNITYSDK_OFFSET(0x6C273D0)
#define CLASS_2_CD27CA279404D058_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x6C263F0)
#define CLASS_2_CD27CA279404D058__CTOR_OFFSET UNITYSDK_OFFSET(0x6C27170)

inline static constexpr unsigned int Class_2_CD27CA279404D058_TypeDefinitionIndex = 56048;

class Class_2_CD27CA279404D058 : public ::Class_1_3979F23DE6A08606
{
public:
	::System::Action* Field_2_5; // 0x10
	::Class_2_A636361CDC778646* Field_2_1; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x20
	::MoleMole::Config::ConfigCameraComposer* Field_2_4; // 0x28
	::Cinemachine::CinemachineComposer* Field_2_2; // 0x30
	::MoleMole::Cameras::CameraDataAccessor* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_ONINITIALIZED_OFFSET))(this, a1);
	}

	::System::Void Method_2_50AF78C78C229325(::Class_0_16E4307DCC419505_202* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_202*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_50AF78C78C229325_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7ACE86AF89160D5(::Class_0_16E4307DCC419505_201* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_E7ACE86AF89160D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_203* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_203*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_203* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_203*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_741DDF759DAB7138(::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::Enum_3_29C0F9DD2D79B68D>*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_741DDF759DAB7138_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_202* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_202*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_201* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_2_F011FE82F2197681()
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_F011FE82F2197681_OFFSET))(this);
	}

	::Cinemachine::CinemachineComposer* Method_2_3DA085EC8F67F5B7()
	{
		return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD27CA279404D058_METHOD_2_3DA085EC8F67F5B7_OFFSET))(this);
	}
};
