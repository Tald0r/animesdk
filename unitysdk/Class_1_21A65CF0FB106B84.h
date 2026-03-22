#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BulletModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TargetSelectorModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

class Class_0_16E4307DCC419505_322;
class Class_1_2DDAC2F6C97EB8AD;
class Class_3_F1BD532A9524BB6D;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace MoleMole::MonoEffectContrllerModule { class PreviewModule; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_1_21A65CF0FB106B84_METHOD_1_0228A1522E11231E_OFFSET UNITYSDK_OFFSET(0xBACBA80)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_0730C606445351F4_OFFSET UNITYSDK_OFFSET(0xBACAB20)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_0835C343A563D519_OFFSET UNITYSDK_OFFSET(0xBACCA80)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_0CEF39DCB4206729_OFFSET UNITYSDK_OFFSET(0xBACA780)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xBACAA20)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_1A7E32BE26C368B8_OFFSET UNITYSDK_OFFSET(0xBACA740)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_1F3078E39B4E6D5A_OFFSET UNITYSDK_OFFSET(0xBACC3A0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_1FFD948A279EE02E_OFFSET UNITYSDK_OFFSET(0xBACA950)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0xBACA520)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBACA790)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_3DACB462EE3F03D8_OFFSET UNITYSDK_OFFSET(0xBACA7A0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBACB310)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0xBACBAB0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_4A84B1EAD1331E3F_OFFSET UNITYSDK_OFFSET(0xBACA710)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xBACAF30)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0xBACB4A0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xBACAFB0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_7E301888D8D2F94E_OFFSET UNITYSDK_OFFSET(0xBACA540)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xBACB880)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0xBACA510)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_B84353F2E34958A9_OFFSET UNITYSDK_OFFSET(0xBACCB80)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0xBACC9C0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_CC5FA2757981D42F_OFFSET UNITYSDK_OFFSET(0xBACC5E0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xBACBAA0)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_F93E3DDBD8D63E92_OFFSET UNITYSDK_OFFSET(0xBACB080)
#define CLASS_1_21A65CF0FB106B84_METHOD_1_FAD3E14075F4502D_OFFSET UNITYSDK_OFFSET(0xBACA730)
#define CLASS_1_21A65CF0FB106B84__CCTOR_OFFSET UNITYSDK_OFFSET(0xBACA4A0)
#define CLASS_1_21A65CF0FB106B84__CTOR_OFFSET UNITYSDK_OFFSET(0xBACA3C0)

inline static constexpr unsigned int Class_1_21A65CF0FB106B84_TypeDefinitionIndex = 72085;

class Class_1_21A65CF0FB106B84 : public ::System::Object
{
public:
	static ::UnityEngine::ParticleSystem_Particle* StaticGet_Field_1_5()
	{
		return (::UnityEngine::ParticleSystem_Particle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21A65CF0FB106B84_TypeDefinitionIndex)->GetStaticField(0xD780);
	}
	::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*>* Field_1_8; // 0x18
	::MoleMole::MonoEffectContrllerModule::BulletModule Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*>* Field_1_9; // 0x38
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* Field_1_0; // 0x40
	::UnityEngine::ParticleSystem* Field_1_6; // 0x48
	::Class_3_F1BD532A9524BB6D* Field_1_12; // 0x50
	::MoleMole::MonoEffectContrllerModule::TargetSelectorModule Field_1_2; // 0x58
	::Class_1_2DDAC2F6C97EB8AD* Field_1_11; // 0x98
	::MoleMole::MonoEffectContrllerModule::TraceGroupModule Field_1_3; // 0xA0
	::System::Int32 Field_1_7; // 0xB0
	::System::Int32 Field_1_14; // 0xB4
	::System::Boolean Field_1_13; // 0xB8
	::System::Boolean Field_1_4; // 0xB9
	::System::Boolean Field_1_15; // 0xBA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_F1BD532A9524BB6D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F1BD532A9524BB6D*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_21631744E68FDB6A_OFFSET))(this);
	}

	::System::Void Method_1_7E301888D8D2F94E(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1, ::Class_0_16E4307DCC419505_322* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_7E301888D8D2F94E_OFFSET))(this, a1, a2);
	}

	::Class_1_2DDAC2F6C97EB8AD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2DDAC2F6C97EB8AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_1_21A65CF0FB106B84* Method_1_3DACB462EE3F03D8(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_21A65CF0FB106B84*(*)(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_3DACB462EE3F03D8_OFFSET))(a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_0730C606445351F4(::Class_3_F1BD532A9524BB6D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F1BD532A9524BB6D*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_0730C606445351F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FFD948A279EE02E(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_1FFD948A279EE02E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_F1BD532A9524BB6D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F1BD532A9524BB6D*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_1_F93E3DDBD8D63E92(::System::UInt32 a1, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_F93E3DDBD8D63E92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::SetupModule& Method_1_4A84B1EAD1331E3F()
	{
		return ((::MoleMole::MonoEffectContrllerModule::SetupModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_4A84B1EAD1331E3F_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::BulletModule& Method_1_0CEF39DCB4206729()
	{
		return ((::MoleMole::MonoEffectContrllerModule::BulletModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_0CEF39DCB4206729_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::TraceGroupModule& Method_1_1A7E32BE26C368B8()
	{
		return ((::MoleMole::MonoEffectContrllerModule::TraceGroupModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_1A7E32BE26C368B8_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::PreviewModule*& Method_1_0228A1522E11231E()
	{
		return ((::MoleMole::MonoEffectContrllerModule::PreviewModule*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_0228A1522E11231E_OFFSET))(this);
	}

	::Class_3_F1BD532A9524BB6D* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_F1BD532A9524BB6D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_4679E7840A7526E1_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::TargetSelectorModule& Method_1_FAD3E14075F4502D()
	{
		return ((::MoleMole::MonoEffectContrllerModule::TargetSelectorModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_FAD3E14075F4502D_OFFSET))(this);
	}

	::System::Void Method_1_CC5FA2757981D42F(::Class_0_16E4307DCC419505_322* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_CC5FA2757981D42F_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_21A65CF0FB106B84* a1)
	{
		return ((::System::Void(*)(::Class_1_21A65CF0FB106B84*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}

	::UnityEngine::ParticleSystem_Particle& Method_1_0835C343A563D519(::System::Int32 a1)
	{
		return ((::UnityEngine::ParticleSystem_Particle&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_0835C343A563D519_OFFSET))(this, a1);
	}

	::System::Void Method_1_B84353F2E34958A9(::MoleMole::MonoEffectContrllerModule::TraceGroupModule a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_B84353F2E34958A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F3078E39B4E6D5A(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_1F3078E39B4E6D5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21A65CF0FB106B84_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}
};
