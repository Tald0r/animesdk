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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE442D40)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE442860)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE4422C0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1277C4D1F57C4142_OFFSET UNITYSDK_OFFSET(0xE443600)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE441F10)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1CAF4C10270D4E10_OFFSET UNITYSDK_OFFSET(0xE443430)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE441CE0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE4433C0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xE441C70)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_6339C5B3AC50C45C_OFFSET UNITYSDK_OFFSET(0xE4428C0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0xE442C90)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE441DE0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE443590)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xE442340)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xE442DE0)
#define MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE4433B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialAnimationTrait_TypeDefinitionIndex = 58068;

	class MaterialAnimationTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MaterialPropertyList; // 0x10
		::System::String* Tag; // 0x18
		::System::Int32 Priority; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
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

		::System::Boolean Method_2_6339C5B3AC50C45C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_6339C5B3AC50C45C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* Method_2_1CAF4C10270D4E10(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1CAF4C10270D4E10_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MaterialAnimationTrait* Method_2_1277C4D1F57C4142(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MaterialAnimationTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATERIALANIMATIONTRAIT_METHOD_2_1277C4D1F57C4142_OFFSET))(a1, a2);
		}
	};
}
