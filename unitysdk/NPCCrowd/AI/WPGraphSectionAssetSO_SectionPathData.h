#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_WPGRAPHSECTIONASSETSO_SECTIONPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x601CA10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphSectionAssetSO_SectionPathData_TypeDefinitionIndex = 58434;

	class WPGraphSectionAssetSO_SectionPathData : public ::System::Object
	{
	public:
		::System::String* graphAssetPath; // 0x10
		::System::String* stateAssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHSECTIONASSETSO_SECTIONPATHDATA__CTOR_OFFSET))(this);
		}
	};
}
