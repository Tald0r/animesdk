#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_CEF0D252E55DCB0D_Struct_2_1F8F89E884923C37.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ReachIKConfig.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC1E1270)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC1E1070)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC1E0D60)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xC1E0950)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xC1E1840)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_38941DBFF8AF9EDE_OFFSET UNITYSDK_OFFSET(0xC1E1370)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xC1E10D0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xC1E0DE0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_6560E2B3145075DA_OFFSET UNITYSDK_OFFSET(0xC1E18B0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xC1E1560)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC1E0A50)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xC1E0900)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xC1E0B80)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xC1E17D0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_D0E8C1E6D7DDB100_OFFSET UNITYSDK_OFFSET(0xC1E1620)
#define MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E1610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReachIKTrait_TypeDefinitionIndex = 62642;

	class ReachIKTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ReachIKConfig>* IKConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_A3CD8010EE7E2C0B(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ReachIKTrait* Method_2_D0E8C1E6D7DDB100(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_D0E8C1E6D7DDB100_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_38941DBFF8AF9EDE(::Il2CppArray<::Class_3_CEF0D252E55DCB0D_Struct_2_1F8F89E884923C37>*& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_3_CEF0D252E55DCB0D_Struct_2_1F8F89E884923C37>*&, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_38941DBFF8AF9EDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ReachIKTrait* Method_2_6560E2B3145075DA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_METHOD_2_6560E2B3145075DA_OFFSET))(a1);
		}
	};
}
