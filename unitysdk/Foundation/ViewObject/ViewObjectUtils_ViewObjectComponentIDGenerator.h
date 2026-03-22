#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_VIEWOBJECTCOMPONENTIDGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x6DB0AC0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectUtils_ViewObjectComponentIDGenerator_TypeDefinitionIndex = 72989;

	class ViewObjectUtils_ViewObjectComponentIDGenerator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__CurrentMaxId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectUtils_ViewObjectComponentIDGenerator_TypeDefinitionIndex)->GetStaticField(0xF130);
		}

		static ::System::UInt32 Generate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_VIEWOBJECTCOMPONENTIDGENERATOR_GENERATE_OFFSET))();
		}
	};
}
