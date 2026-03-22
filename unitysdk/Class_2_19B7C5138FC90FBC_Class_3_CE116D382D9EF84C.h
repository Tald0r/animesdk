#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCE57DF0)
#define CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCE57E70)
#define CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_INVOKE_OFFSET UNITYSDK_OFFSET(0xCE57810)
#define CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE57800)

inline static constexpr unsigned int Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C_TypeDefinitionIndex = 46803;

class Class_2_19B7C5138FC90FBC_Class_3_CE116D382D9EF84C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_B196590B3E289741 Invoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_B196590B3E289741 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_19B7C5138FC90FBC_CLASS_3_CE116D382D9EF84C_ENDINVOKE_OFFSET))(this, a1);
	}
};
