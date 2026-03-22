#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCCA5940)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCCA5550)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCCA5120)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xCCA5880)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCCA4D10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xCCA5F30)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xCCA4CA0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_8590F65551960F0B_OFFSET UNITYSDK_OFFSET(0xCCA5BB0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0xCCA55B0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCCA4E10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xCCA4F40)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCCA5EC0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_CB5503D9481B2EDB_OFFSET UNITYSDK_OFFSET(0xCCA5D10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xCCA51A0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET UNITYSDK_OFFSET(0xCCA5A10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCA5BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamePlayTagTrait_TypeDefinitionIndex = 73636;

	class GamePlayTagTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* EntityTagList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPreEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GamePlayTagTrait* Method_2_8590F65551960F0B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_8590F65551960F0B_OFFSET))(a1);
		}

		::System::Boolean Method_2_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GamePlayTagTrait* Method_2_CB5503D9481B2EDB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_CB5503D9481B2EDB_OFFSET))(a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
