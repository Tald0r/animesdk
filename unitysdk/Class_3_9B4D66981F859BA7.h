#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"

class Class_1_9B349D65552A3207;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_3_9B4D66981F859BA7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xCB024C0)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_10AF6C8D71C89541_OFFSET UNITYSDK_OFFSET(0xCB02630)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xCB02AC0)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0xCB039A0)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCB03940)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0xCB03820)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_DE383515C5720A8B_OFFSET UNITYSDK_OFFSET(0xCB02E30)
#define CLASS_3_9B4D66981F859BA7_METHOD_3_E0F691A27281F8A6_OFFSET UNITYSDK_OFFSET(0xCB03070)
#define CLASS_3_9B4D66981F859BA7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xCB02240)
#define CLASS_3_9B4D66981F859BA7__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB02520)
#define CLASS_3_9B4D66981F859BA7__CTOR_OFFSET UNITYSDK_OFFSET(0xCB025A0)

inline static constexpr unsigned int Class_3_9B4D66981F859BA7_TypeDefinitionIndex = 74636;

class Class_3_9B4D66981F859BA7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_11 = 0x55; // 0x0
	::UnityEngine::Animator* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::Class_1_9B349D65552A3207*>* Field_3_6; // 0x50
	::System::Single Field_3_5; // 0x58
	::System::Boolean Field_3_10; // 0x5C
	::System::Boolean Field_3_7; // 0x5D
	::UnityEngine::Animations::AnimationMixerPlayable Field_3_2; // 0x60
	::System::Single Field_3_4; // 0x70
	::System::Single Field_3_3; // 0x74
	::System::Int32 Field_3_8; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_10AF6C8D71C89541(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_10AF6C8D71C89541_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0F691A27281F8A6(::Foundation::AssetPath a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_E0F691A27281F8A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_3_DE383515C5720A8B()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_DE383515C5720A8B_OFFSET))(this);
	}

	static ::Class_3_9B4D66981F859BA7* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_9B4D66981F859BA7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9B4D66981F859BA7_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
	}
};
