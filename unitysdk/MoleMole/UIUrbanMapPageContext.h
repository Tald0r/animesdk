#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET UNITYSDK_OFFSET(0x7BDE590)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BDE640)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDE870)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageContext_TypeDefinitionIndex = 43397;

	class UIUrbanMapPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnManulClose; // 0x28
		::System::Action* AfterOpenMap; // 0x30
		::System::String* TeleportAudio; // 0x38
		::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo DefaultFocusInfo; // 0x40
		::Struct_2_B679E4D914A10080 FromSectionOrFloor; // 0x58
		::Struct_2_B679E4D914A10080 SectionOrFloor; // 0x60
		::System::Boolean Is3DMode; // 0x68
		::System::Boolean FirstInit; // 0x69
		::System::Boolean AsyncLoad; // 0x6A
		::System::Boolean BangkovMode; // 0x6B
		::Enum_3_AB9CCA0B2E05A401 DefaultPeriod; // 0x6C
		::System::Int32 FromMap3dAreaId; // 0x70
		::System::Int32 SpecialLayerIndex; // 0x74
		::System::Int32 Map3dAreaId; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET))(this, other);
		}
	};
}
