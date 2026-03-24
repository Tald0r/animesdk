#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/Struct_2_8F1F8F30CBE74E21.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_230;
class Class_0_16E4307DCC419505_231;
class Class_0_16E4307DCC419505_272;
namespace System { class Action; }

#define CLASS_2_9BA106E07CD33064_METHOD_2_2C4071D844188546_OFFSET UNITYSDK_OFFSET(0x6788040)
#define CLASS_2_9BA106E07CD33064_METHOD_2_2D5EE8D5F52A5292_OFFSET UNITYSDK_OFFSET(0x6788340)
#define CLASS_2_9BA106E07CD33064_METHOD_2_3F2DD0D9A22299D7_OFFSET UNITYSDK_OFFSET(0x67878E0)
#define CLASS_2_9BA106E07CD33064_METHOD_2_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x67876F0)
#define CLASS_2_9BA106E07CD33064_METHOD_2_419CF3E70D4176BE_OFFSET UNITYSDK_OFFSET(0x67884F0)
#define CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x67882D0)
#define CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x6788480)
#define CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_3_OFFSET UNITYSDK_OFFSET(0x6788880)
#define CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x6787FA0)
#define CLASS_2_9BA106E07CD33064_METHOD_2_C841B06E2F498A13_OFFSET UNITYSDK_OFFSET(0x6787700)
#define CLASS_2_9BA106E07CD33064_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x67876D0)
#define CLASS_2_9BA106E07CD33064__CTOR_OFFSET UNITYSDK_OFFSET(0x6788030)

inline static constexpr unsigned int Class_2_9BA106E07CD33064_TypeDefinitionIndex = 54098;

class Class_2_9BA106E07CD33064 : public ::Class_1_3979F23DE6A08606
{
public:
	::System::Action* Field_2_5; // 0x10
	::Struct_2_8F1F8F30CBE74E21 Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_4; // 0x50
	::System::Boolean Field_2_1; // 0x5C
	::Foundation::Unreal::FTransform Field_2_2; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_2_C841B06E2F498A13(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_C841B06E2F498A13_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F2DD0D9A22299D7(::Class_0_16E4307DCC419505_231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_231*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_3F2DD0D9A22299D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_272* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	static ::UnityEngine::Quaternion Method_2_2C4071D844188546(::UnityEngine::Quaternion a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_2C4071D844188546_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_272* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	static ::System::Nullable_1<::UnityEngine::Vector3> Method_2_2D5EE8D5F52A5292(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis a1)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_2D5EE8D5F52A5292_OFFSET))(a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_230*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FTransform Method_2_419CF3E70D4176BE()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_419CF3E70D4176BE_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA_3(::Class_0_16E4307DCC419505_231* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_231*))((::PBYTE)hIl2Cpp + CLASS_2_9BA106E07CD33064_METHOD_2_C50B93169B85DAEA_3_OFFSET))(this, a1);
	}
};
