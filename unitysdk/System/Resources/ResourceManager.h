#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Resources/UltimateResourceFallbackLocation.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Resources { class IResourceGroveler; }
namespace System::Resources { class ResourceManager_CultureNameResourceSetPair; }
namespace System::Resources { class ResourceSet; }

#define SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET UNITYSDK_OFFSET(0x17F5D190)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET UNITYSDK_OFFSET(0x17F5C330)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET UNITYSDK_OFFSET(0x17F5E910)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET UNITYSDK_OFFSET(0x17F5C7A0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETNEUTRALRESOURCESLANGUAGE_OFFSET UNITYSDK_OFFSET(0x17F5E8F0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x17F5C6A0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x17F5CD30)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x17F5E1D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x17F5F5C0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x17F5F5A0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x17F5BFD0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET UNITYSDK_OFFSET(0x17F5D3D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x17F5D3A0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x17F5C4B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x17F5C4A0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x17F5C630)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F5FBB0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F5C0C0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5C030)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceManager_TypeDefinitionIndex = 511;

	class ResourceManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MscorlibName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}
		static ::System::String** StaticGet_ResSetTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x8F8);
		}
		static ::System::Type** StaticGet__minResourceSet()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		static ::System::String** StaticGet_ResReaderTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x908);
		}
		static ::System::Int32* StaticGet_MagicNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x1F0);
		}
		static ::System::Int32* StaticGet_HeaderVersionNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x1F4);
		}
		static ::System::Int32* StaticGet_DEBUG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResourceManager_TypeDefinitionIndex)->GetStaticField(0x1F8);
		}
		::System::Version* _satelliteContractVersion; // 0x10
		::System::Reflection::RuntimeAssembly* m_callingAssembly; // 0x18
		::System::Reflection::Assembly* _callingAssembly; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* _resourceSets; // 0x28
		::System::Resources::ResourceManager_CultureNameResourceSetPair* _lastUsedResourceCache; // 0x30
		::System::Collections::Hashtable* ResourceSets; // 0x38
		::System::Type* _userResourceSet; // 0x40
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x48
		::System::String* moduleDir; // 0x50
		::System::Type* _locationInfo; // 0x58
		::System::Resources::IResourceGroveler* resourceGroveler; // 0x60
		::System::Reflection::Assembly* MainAssembly; // 0x68
		::System::String* BaseNameField; // 0x70
		::System::Boolean _ignoreCase; // 0x78
		::System::Boolean UseSatelliteAssem; // 0x79
		::System::Boolean _lookedForSatelliteContractVersion; // 0x7A
		::System::Boolean UseManifest; // 0x7B
		::System::Resources::UltimateResourceFallbackLocation _fallbackLoc; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* resourceSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CTOR_1_OFFSET))(this, resourceSource);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void CommonAssemblyInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET))(this);
		}

		::System::String* GetResourceFileName(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET))(this, culture);
		}

		::System::Resources::ResourceSet* GetFirstResourceSet(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETFIRSTRESOURCESET_OFFSET))(this, culture);
		}

		::System::Resources::ResourceSet* GetResourceSet(::System::Globalization::CultureInfo* culture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET))(this, culture, createIfNotExists, tryParents);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* culture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET))(this, culture, createIfNotExists, tryParents);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet_1(::System::Globalization::CultureInfo* requestedCulture, ::System::Boolean createIfNotExists, ::System::Boolean tryParents, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Resources::ResourceSet*(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_1_OFFSET))(this, requestedCulture, createIfNotExists, tryParents, stackMark);
		}

		static ::System::Void AddResourceSet(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>* localResourceSets, ::System::String* cultureName, ::System::Resources::ResourceSet*& rs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceSet*>*, ::System::String*, ::System::Resources::ResourceSet*&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET))(localResourceSets, cultureName, rs);
		}

		static ::System::Version* GetSatelliteContractVersion(::System::Reflection::Assembly* a)
		{
			return ((::System::Version*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET))(a);
		}

		static ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETNEUTRALRESOURCESLANGUAGE_OFFSET))(a);
		}

		static ::System::Boolean CompareNames(::System::String* asmTypeName1, ::System::String* typeName2, ::System::Reflection::AssemblyName* asmName2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET))(asmTypeName1, typeName2, asmName2);
		}

		::System::String* GetString(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_OFFSET))(this, name);
		}

		::System::String* GetString_1(::System::String* name, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSTRING_1_OFFSET))(this, name, culture);
		}
	};
}
