#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE826BF0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE826870)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE826310)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_07EFB6523442A5AA_OFFSET UNITYSDK_OFFSET(0xE827950)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE825F60)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE825D30)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_5FEED8BF00B20F35_OFFSET UNITYSDK_OFFSET(0xE827590)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE825E30)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xE825CE0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE827C60)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xE826390)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0xE8268D0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_F28F6C32FE6B7684_OFFSET UNITYSDK_OFFSET(0xE827AB0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xE827510)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0xE8271A0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE827940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetModelCaptureTrait_TypeDefinitionIndex = 61820;

	class GadgetModelCaptureTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* Key; // 0x10
		::System::Boolean UseOverrideEnableState; // 0x18
		::System::Boolean OverrideEnableState; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_E0AC97338167133E_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* Method_2_07EFB6523442A5AA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_07EFB6523442A5AA_OFFSET))(a1);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* Method_2_F28F6C32FE6B7684(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_F28F6C32FE6B7684_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_5FEED8BF00B20F35(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_5FEED8BF00B20F35_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
