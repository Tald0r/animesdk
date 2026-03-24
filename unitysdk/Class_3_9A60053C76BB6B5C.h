#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_9A60053C76BB6B5C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA5C3240)
#define CLASS_3_9A60053C76BB6B5C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA5C3290)
#define CLASS_3_9A60053C76BB6B5C_INVOKE_OFFSET UNITYSDK_OFFSET(0xA5C2F50)
#define CLASS_3_9A60053C76BB6B5C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C2F30)

inline static constexpr unsigned int Class_3_9A60053C76BB6B5C_TypeDefinitionIndex = 50481;

class Class_3_9A60053C76BB6B5C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_ENDINVOKE_OFFSET))(this, a1);
	}
};
