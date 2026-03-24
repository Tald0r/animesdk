#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD7C8940)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD7C8430)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD7C7EA0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1277C4D1F57C4142_OFFSET UNITYSDK_OFFSET(0xD7C9030)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xD7C7AF0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1CAF4C10270D4E10_OFFSET UNITYSDK_OFFSET(0xD7C9250)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xD7C78C0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xD7C91E0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0xD7C8490)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xD7C8890)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xD7C79C0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xD7C8FC0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0xD7C7850)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xD7C7F20)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xD7C89E0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C8FB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialAnimationTrait_TypeDefinitionIndex = 53144;

	class MaterialAnimationTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MaterialPropertyList; // 0x18
		::System::String* Tag; // 0x20
		::System::Int32 Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_A3CD8010EE7E2C0B(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* Method_2_1277C4D1F57C4142(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1277C4D1F57C4142_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* Method_2_1CAF4C10270D4E10(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1CAF4C10270D4E10_OFFSET))(a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_72BF6AD1701A5726_OFFSET))(this, a1, a2);
		}
	};
}
