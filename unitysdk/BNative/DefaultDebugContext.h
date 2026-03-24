#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BNATIVE_DEFAULTDEBUGCONTEXT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x96B84A0)
#define BNATIVE_DEFAULTDEBUGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x96B8490)

namespace BNative
{
	inline static constexpr unsigned int DefaultDebugContext_TypeDefinitionIndex = 66695;

	class DefaultDebugContext : public ::System::Object
	{
	public:
		::System::Object* _obj; // 0x10

		::System::Void _ctor(::System::Object* self)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUGCONTEXT__CTOR_OFFSET))(this, self);
		}

		::System::String* get_message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUGCONTEXT_GET_MESSAGE_OFFSET))(this);
		}
	};
}
