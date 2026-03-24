#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE2DD670)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE2DD580)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE2DD4D0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE2DD2A0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_8557A175F0E64E2B_OFFSET UNITYSDK_OFFSET(0xE2DD880)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0xE2DD610)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_9F608DB805CD3F02_OFFSET UNITYSDK_OFFSET(0xE2DD720)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xE2DD290)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE2DD3A0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0xE2DD550)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE2DD710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UpdatePartySceneTrait_TypeDefinitionIndex = 43803;

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

		static ::MoleMole::Config::UpdatePartySceneTrait* Method_2_8557A175F0E64E2B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_8557A175F0E64E2B_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}
	};
}
