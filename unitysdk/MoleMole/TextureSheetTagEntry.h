#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TEXTURESHEETTAGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x9855D10)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetTagEntry_TypeDefinitionIndex = 79932;

	class TextureSheetTagEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::Unreal::SerializableGameplayTagQuery*>* Queries; // 0x10
		::MoleMole::HollowChessboard::EffectResult EffectResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETTAGENTRY__CTOR_OFFSET))(this);
		}
	};
}
