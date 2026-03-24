#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_F61F3C9E55A83BDE_Enum_3_989ED891CB4645DA_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_C806D582A5D61934;
namespace MoleMole { class UIActivityHotpotFoodItemRightWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F61F3C9E55A83BDE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA585AB0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA585DE0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA585CE0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA585D40)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_E8702C4614090520_OFFSET UNITYSDK_OFFSET(0xA585BC0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA585BA0)
#define CLASS_3_F61F3C9E55A83BDE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA585A30)
#define CLASS_3_F61F3C9E55A83BDE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA585B10)
#define CLASS_3_F61F3C9E55A83BDE__CTOR_OFFSET UNITYSDK_OFFSET(0xA585B90)

inline static constexpr unsigned int Class_3_F61F3C9E55A83BDE_TypeDefinitionIndex = 70659;

class Class_3_F61F3C9E55A83BDE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_12 = 0xB4; // 0x0
	::MoleMole::UIActivityHotpotFoodItemRightWidgetController* Field_3_8; // 0x48
	::UnityEngine::Transform* Field_3_7; // 0x50
	::UnityEngine::Transform* Field_3_6; // 0x58
	::UnityEngine::Rigidbody2D* Field_3_3; // 0x60
	::Class_2_C806D582A5D61934* Field_3_1; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_3_5; // 0x70
	::UnityEngine::Collider2D* Field_3_4; // 0x78
	::Class_3_F61F3C9E55A83BDE_Enum_3_989ED891CB4645DA_1 Field_3_2; // 0x80
	::System::Int32 Field_3_0; // 0x84
	::System::Boolean Field_3_11; // 0x88
	::System::Single Field_3_9; // 0x8C
	::System::Single Field_3_10; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_3_E8702C4614090520()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_E8702C4614090520_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F61F3C9E55A83BDE* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F61F3C9E55A83BDE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}
};
