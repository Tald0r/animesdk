#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0xE0C3700)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE0C32C0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE0C3080)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xE0C3100)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE0C2C70)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE0C3DD0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_530692F81B678112_OFFSET UNITYSDK_OFFSET(0xE0C3A50)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0xE0C3550)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xE0C2C60)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE0C2D70)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B854853AA2964E30_OFFSET UNITYSDK_OFFSET(0xE0C3BB0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET UNITYSDK_OFFSET(0xE0C2EA0)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE0C3D60)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET UNITYSDK_OFFSET(0xE0C3320)
#define MOLEMOLE_CONFIG_SCENEOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C3A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneObjectTrait_TypeDefinitionIndex = 62954;

	class SceneObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SceneObjectID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_B9BDB4313A1FAFEC(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B9BDB4313A1FAFEC_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_BUILDENTITY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::SceneObjectTrait* Method_2_530692F81B678112(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::SceneObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_530692F81B678112_OFFSET))(a1);
		}

		static ::MoleMole::Config::SceneObjectTrait* Method_2_B854853AA2964E30(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::SceneObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_B854853AA2964E30_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F4FDF6DDB7D0ADBB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_F4FDF6DDB7D0ADBB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEOBJECTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
