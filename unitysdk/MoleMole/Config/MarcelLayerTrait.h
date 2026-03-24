#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xF2DACE0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF2DAAB0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF2DAA00)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xF2DA7D0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xF2DB280)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0xF2DABA0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_4C37AC1B5153AFB1_OFFSET UNITYSDK_OFFSET(0xF2DAF40)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0xF2DAB40)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xF2DA7C0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xF2DA8D0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_BD0A2A29C23120CC_OFFSET UNITYSDK_OFFSET(0xF2DB120)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0xF2DAA80)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xF2DAD80)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DAF30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MarcelLayerTrait_TypeDefinitionIndex = 40217;

	class MarcelLayerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MarcelLayerTrait* Method_2_4C37AC1B5153AFB1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MarcelLayerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_4C37AC1B5153AFB1_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::MarcelLayerTrait* Method_2_BD0A2A29C23120CC(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MarcelLayerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_BD0A2A29C23120CC_OFFSET))(a1);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
