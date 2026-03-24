#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_LOCALLOGUTIL_LOG_OFFSET UNITYSDK_OFFSET(0x1AB75D80)
#define FOUNDATION_LOCALLOGUTIL_OPENLOGFILEANDFLODER_OFFSET UNITYSDK_OFFSET(0x1AB76030)
#define FOUNDATION_LOCALLOGUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB76130)

namespace Foundation
{
	inline static constexpr unsigned int LocalLogUtil_TypeDefinitionIndex = 8108;

	class LocalLogUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_SavePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x7350);
		}
		static ::System::Boolean* StaticGet_wirteLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalLogUtil_TypeDefinitionIndex)->GetStaticField(0x39C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL_LOG_OFFSET))(msg);
		}

		static ::System::Void OpenLogFileAndFloder()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_LOCALLOGUTIL_OPENLOGFILEANDFLODER_OFFSET))();
		}
	};
}
