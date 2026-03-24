#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_70FF0A172150B476.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_64;
class Class_1_F50A7367BDE7BD82;
class Class_2_14986121AA61AD99;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x67447E0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x6745E60)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x6745350)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x6744C30)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x6745A00)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x67453E0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_366CBD1F9A416EA1_OFFSET UNITYSDK_OFFSET(0x6744CB0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x6744BF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x6745330)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x6745310)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET UNITYSDK_OFFSET(0x6744C20)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x6744F10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x6745700)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6675B71272F11BAF_OFFSET UNITYSDK_OFFSET(0x6744F20)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET UNITYSDK_OFFSET(0x6745570)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET UNITYSDK_OFFSET(0x6745080)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x6745B70)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x6745EF0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x6745070)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET UNITYSDK_OFFSET(0x6745430)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x67454F0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6745AD0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET UNITYSDK_OFFSET(0x6745210)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x67453F0)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x6745410)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x6745550)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x6745A10)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x6744C00)
#define CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET UNITYSDK_OFFSET(0x6745A30)
#define CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x67442F0)
#define CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x6744840)
#define CLASS_3_248DACE3BB3053DD__CTOR_OFFSET UNITYSDK_OFFSET(0x67448C0)

inline static constexpr unsigned int Class_3_248DACE3BB3053DD_TypeDefinitionIndex = 53902;

class Class_3_248DACE3BB3053DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_46 = 0x4F; // 0x0
	::Class_2_14986121AA61AD99* Field_3_37; // 0x48
	::MoleMole::Config::ConfigRotation* Field_3_5; // 0x50
	::MoleMole::Config::ConfigMovement* Field_3_4; // 0x58
	::MoleMole::Battle::Entity* Field_3_39; // 0x60
	::Struct_2_FA5F50563E60AFBA Field_3_27; // 0x68
	::UnityEngine::Collider* Field_3_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_22; // 0x88
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* Field_3_40; // 0x90
	::MoleMole::EntityHandle Field_3_30; // 0x98
	::Class_1_F50A7367BDE7BD82* Field_3_44; // 0xA8
	::UnityEngine::Rigidbody* Field_3_6; // 0xB0
	::System::Action_2<::Class_3_248DACE3BB3053DD*, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D>* Field_3_41; // 0xB8
	::Class_1_43BD383C98B4C0C5_64* Field_3_45; // 0xC0
	::MoleMole::Battle::Entity* Field_3_38; // 0xC8
	::MoleMole::Battle::Entity* Field_3_1; // 0xD0
	::MoleMole::EntityHandle Field_3_31; // 0xD8
	::System::Single Field_3_10; // 0xE8
	::UnityEngine::Vector3 Field_3_33; // 0xEC
	::System::Single Field_3_7; // 0xF8
	::System::Single Field_3_8; // 0xFC
	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Field_3_2; // 0x100
	::UnityEngine::LayerMask Field_3_15; // 0x104
	::System::UInt32 Field_3_29; // 0x108
	::System::Single Field_3_11; // 0x10C
	::System::Single Field_3_12; // 0x110
	::UnityEngine::Vector3 Field_3_17; // 0x114
	::UnityEngine::Vector3 Field_3_9; // 0x120
	::UnityEngine::Vector3 Field_3_18; // 0x12C
	::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF Field_3_3; // 0x138
	::UnityEngine::Vector3 Field_3_24; // 0x13C
	::UnityEngine::Vector3 Field_3_32; // 0x148
	::UnityEngine::Vector3 Field_3_25; // 0x154
	::UnityEngine::Vector3 Field_3_21; // 0x160
	::UnityEngine::Vector3 Field_3_35; // 0x16C
	::UnityEngine::Vector3 Field_3_16; // 0x178
	::System::UInt32 Field_3_28; // 0x184
	::System::Int32 Field_3_42; // 0x188
	::System::Single Field_3_13; // 0x18C
	::UnityEngine::Vector3 Field_3_26; // 0x190
	::Struct_2_70FF0A172150B476 Field_3_20; // 0x19C
	::UnityEngine::Quaternion Field_3_23; // 0x1AC
	::UnityEngine::Vector3 Field_3_19; // 0x1BC
	::Struct_2_FC595D1A561D8C6F_1 Field_3_36; // 0x1C8
	::UnityEngine::Vector3 Field_3_34; // 0x1E4
	::System::Int32 Field_3_43; // 0x1F0
	::System::Single Field_3_14; // 0x1F4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_413F493333BF3391_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D Method_3_52FB29FB5E593F19()
	{
		return ((::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_52FB29FB5E593F19_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_366CBD1F9A416EA1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_366CBD1F9A416EA1_OFFSET))(this, a1);
	}

	::System::Void Method_3_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_3_6675B71272F11BAF(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6675B71272F11BAF_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_43BD383C98B4C0C5_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_64*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_8070B88FBB3BD314(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8070B88FBB3BD314_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_64* Method_3_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Void Method_3_8EC1F26B8B8123B9(::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD_Enum_3_561E810C4866028D))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8EC1F26B8B8123B9_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::System::Void Method_3_D015A8BDCC3405F7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D015A8BDCC3405F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_6BAC7E95E775143F(::MoleMole::Config::ConfigMovement* a1, ::MoleMole::Config::ConfigRotation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMovement*, ::MoleMole::Config::ConfigRotation*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6BAC7E95E775143F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_6105334A729F22E3_OFFSET))(this, a1);
	}

	::Class_1_F50A7367BDE7BD82* Method_3_24748FC20F375725_1()
	{
		return ((::Class_1_F50A7367BDE7BD82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_24748FC20F375725_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Void Method_3_E2CD5451E4D4A7F0(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_E2CD5451E4D4A7F0_OFFSET))(this, a1, a2);
	}

	static ::Class_3_248DACE3BB3053DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_248DACE3BB3053DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_097468641FDED14E_1(::Class_1_43BD383C98B4C0C5_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_64*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE_1(::Class_1_F50A7367BDE7BD82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50A7367BDE7BD82*))((::PBYTE)hIl2Cpp + CLASS_3_248DACE3BB3053DD_METHOD_3_8C8625211DA811AE_1_OFFSET))(this, a1);
	}
};
