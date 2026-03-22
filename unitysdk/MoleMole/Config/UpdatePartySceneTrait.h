#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15ECA510)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15ECA4F0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15ECA480)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x15ECA250)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x15ECA500)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_9F608DB805CD3F02_OFFSET UNITYSDK_OFFSET(0x15ECA5C0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x15ECA240)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x15ECA350)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_CA3E0BA05721EC8D_OFFSET UNITYSDK_OFFSET(0x15ECA6E0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x15ECA4E0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECA5B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UpdatePartySceneTrait_TypeDefinitionIndex = 76469;

	class UpdatePartySceneTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* Method_2_9F608DB805CD3F02(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_9F608DB805CD3F02_OFFSET))(a1);
		}

		::System::Boolean Method_2_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* Method_2_CA3E0BA05721EC8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_CA3E0BA05721EC8D_OFFSET))(a1, a2);
		}
	};
}
