#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define OPTIMIZESTRING_STRINGBUILDERNOGC_COPYTOCACHESTRING_OFFSET UNITYSDK_OFFSET(0x1B1444E0)
#define OPTIMIZESTRING_STRINGBUILDERNOGC_INITPOOL_OFFSET UNITYSDK_OFFSET(0x1B144140)
#define OPTIMIZESTRING_STRINGBUILDERNOGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B144860)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B143F80)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1443E0)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1442E0)

namespace OptimizeString
{
	inline static constexpr unsigned int StringBuilderNoGC_TypeDefinitionIndex = 7118;

	class StringBuilderNoGC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::OptimizeString::StringBuilderNoGC*>** StaticGet_s_pool()
		{
			return (::System::Collections::Generic::Stack_1<::OptimizeString::StringBuilderNoGC*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x5FC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_CachedShortStringDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x5FC8);
		}
		static ::System::Boolean* StaticGet_s_UseShortCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x3220);
		}
		::System::String* forToString; // 0x10
		::System::String* m_immutableString; // 0x18
		::System::String* m_cacheString; // 0x20
		::System::Text::StringBuilder* m_stringBuilder; // 0x28
		::System::Int32 m_capacity; // 0x30
		::System::Boolean m_EnableShortCache; // 0x34
		::System::Boolean m_isDirty; // 0x35
		::System::Boolean useShortCache; // 0x36

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean enableShortCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_1_OFFSET))(this, enableShortCache);
		}

		static ::System::Void InitPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_INITPOOL_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_TOSTRING_OFFSET))(this);
		}

		::System::Void CopyToCacheString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_COPYTOCACHESTRING_OFFSET))(this);
		}
	};
}
