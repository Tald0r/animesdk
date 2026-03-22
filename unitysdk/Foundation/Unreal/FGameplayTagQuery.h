#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTAGFROMINDEX_OFFSET UNITYSDK_OFFSET(0x1A71E890)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1A71E830)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_MATCHES_OFFSET UNITYSDK_OFFSET(0x1A71E800)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A71E940)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71E920)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQuery_TypeDefinitionIndex = 8760;

	class FGameplayTagQuery : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagQuery** StaticGet_Empty()
		{
			return (::Foundation::Unreal::FGameplayTagQuery**)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagQuery_TypeDefinitionIndex)->GetStaticField(0x7E90);
		}
		::Il2CppArray<::Foundation::Unreal::FGameplayTag>* TagDictionary; // 0x10
		::Il2CppArray<::System::Byte>* QueryTokenStream; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY__CCTOR_OFFSET))();
		}

		::System::Boolean Matches(::Foundation::Unreal::FGameplayTagContainer& tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_MATCHES_OFFSET))(this, tags);
		}

		::System::Boolean GetToken(::System::Int32 index, ::System::Byte& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTOKEN_OFFSET))(this, index, value);
		}

		::Foundation::Unreal::FGameplayTag GetTagFromIndex(::System::Int32 index)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERY_GETTAGFROMINDEX_OFFSET))(this, index);
		}
	};
}
