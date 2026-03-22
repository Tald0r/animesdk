#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE4376E0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE437240)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE437010)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE437B70)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_51653CCA11680E8C_OFFSET UNITYSDK_OFFSET(0xE437D90)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xE436FA0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0xE437740)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_A9776253926095D2_OFFSET UNITYSDK_OFFSET(0xE437BE0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE437110)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_CD729A9634455FE2_OFFSET UNITYSDK_OFFSET(0xE437A20)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xE4372C0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE437B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerControlTrait_TypeDefinitionIndex = 73906;

	class ConfigTriggerControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ColliderConfig; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* ColliderCreation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_CD729A9634455FE2(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_CD729A9634455FE2_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* Method_2_A9776253926095D2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_A9776253926095D2_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* Method_2_51653CCA11680E8C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_51653CCA11680E8C_OFFSET))(a1);
		}

		::System::Boolean Method_2_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
		}
	};
}
