#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_209DF9D4E30A4B5C.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x6C293A0)
#define CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x6C29410)
#define CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x6C29060)
#define CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6C29050)

inline static constexpr unsigned int Class_1_195B8736FAC41B99_Class_3_9A1ADE0F4CE714BA_1_TypeDefinitionIndex = 37635;

class Class_1_195B8736FAC41B99_Class_3_9A1ADE0F4CE714BA_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_209DF9D4E30A4B5C& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&))((::PBYTE)hIl2Cpp + CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_195B8736FAC41B99_CLASS_3_9A1ADE0F4CE714BA_1_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
