#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FStruct.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNREALTYPES_GLOBALTYPESTRUCTREGISTRY_GETSTRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1AFC5720)
#define UNREALTYPES_GLOBALTYPESTRUCTREGISTRY_GET_TYPELIST_OFFSET UNITYSDK_OFFSET(0x1AFC5BB0)
#define UNREALTYPES_GLOBALTYPESTRUCTREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5C10)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalTypeStructRegistry_TypeDefinitionIndex = 23986;

	class GlobalTypeStructRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnrealTypes::FStruct>** StaticGet_PrivateTypeList()
		{
			return (::System::Collections::Generic::List_1<::UnrealTypes::FStruct>**)Il2CppClass::FromTypeDefinitionIndex(GlobalTypeStructRegistry_TypeDefinitionIndex)->GetStaticField(0x1D820);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet_TypeId2TypeIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalTypeStructRegistry_TypeDefinitionIndex)->GetStaticField(0x1D828);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Type2TypeIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalTypeStructRegistry_TypeDefinitionIndex)->GetStaticField(0x1D830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTYPESTRUCTREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnrealTypes::FStruct>* get_TypeList()
		{
			return ((::System::Collections::Generic::List_1<::UnrealTypes::FStruct>*(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTYPESTRUCTREGISTRY_GET_TYPELIST_OFFSET))();
		}

		static ::UnrealTypes::FStructHandle GetStructHandle(::System::UInt32 typeId)
		{
			return ((::UnrealTypes::FStructHandle(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTYPESTRUCTREGISTRY_GETSTRUCTHANDLE_OFFSET))(typeId);
		}
	};
}
