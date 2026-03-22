#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace Foundation::ViewObject { class ITraitEntityBuild; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15EC2850)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EC2190)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15EC17A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15EC2700)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x15EC2690)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_12258585B54C162D_OFFSET UNITYSDK_OFFSET(0x15EC2960)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0x15EC1150)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x15EC0F20)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x15EC3800)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x15EC2710)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_66DDCFACE808B0BA_OFFSET UNITYSDK_OFFSET(0x15EC2DC0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x15EC1820)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_963EAF25FF34C63B_OFFSET UNITYSDK_OFFSET(0x15EC21F0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_998C8029281BC2BE_OFFSET UNITYSDK_OFFSET(0x15EC34F0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_9B96A5EBEB685CC8_OFFSET UNITYSDK_OFFSET(0x15EC36A0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x15EC1020)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_BB10C9E690DCABFE_OFFSET UNITYSDK_OFFSET(0x15EC2D10)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x15EC3920)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_CF9BB49DE1EEE181_OFFSET UNITYSDK_OFFSET(0x15EC3870)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x15EC0EA0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x15EC3390)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x15EC2F70)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15EC2E90)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x15EC3320)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EC34B0)
#define MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC3470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetDefaultTrait_TypeDefinitionIndex = 57018;

	class GadgetDefaultTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GadgetDefaultTrait_TypeDefinitionIndex)->GetStaticField(0xC310);
		}
		// static const ::System::String* DefaultPrefabPath; // 0x0
		::System::String* ShowName; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Boolean EnableTimeSlow; // 0x20
		::System::Boolean EnableDither; // 0x21
		::System::String* DitherConfigKey; // 0x28
		::System::Boolean EnableMove; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT__CCTOR_OFFSET))();
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::System::String* get_FinalPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		::System::Void Method_2_66DDCFACE808B0BA(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_66DDCFACE808B0BA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_963EAF25FF34C63B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_963EAF25FF34C63B_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* Method_2_998C8029281BC2BE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_998C8029281BC2BE_OFFSET))(a1, a2);
		}

		::System::Void Method_2_BB10C9E690DCABFE(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_BB10C9E690DCABFE_OFFSET))(this, a1);
		}

		::System::Void Method_2_12258585B54C162D(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_12258585B54C162D_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GadgetDefaultTrait* Method_2_9B96A5EBEB685CC8(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GadgetDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_9B96A5EBEB685CC8_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_2_CF9BB49DE1EEE181(::Foundation::ViewObject::ITraitEntityBuild* a1)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ITraitEntityBuild*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_CF9BB49DE1EEE181_OFFSET))(a1);
		}

		::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETDEFAULTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
