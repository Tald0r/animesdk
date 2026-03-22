#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A72BA6D8C1BF0087_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x733BBE0)
#define CLASS_3_A72BA6D8C1BF0087_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x733BC50)
#define CLASS_3_A72BA6D8C1BF0087_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x733B8A0)
#define CLASS_3_A72BA6D8C1BF0087_1__CTOR_OFFSET UNITYSDK_OFFSET(0x733B890)

inline static constexpr unsigned int Class_3_A72BA6D8C1BF0087_1_TypeDefinitionIndex = 77923;

class Class_3_A72BA6D8C1BF0087_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A72BA6D8C1BF0087_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A72BA6D8C1BF0087_1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A72BA6D8C1BF0087_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A72BA6D8C1BF0087_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
