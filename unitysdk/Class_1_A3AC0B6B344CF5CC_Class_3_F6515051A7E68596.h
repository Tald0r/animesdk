#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A3AC0B6B344CF5CC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB53EE90)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB53EEF0)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_INVOKE_OFFSET UNITYSDK_OFFSET(0xB53E8F0)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596__CTOR_OFFSET UNITYSDK_OFFSET(0xB53E8E0)

inline static constexpr unsigned int Class_1_A3AC0B6B344CF5CC_Class_3_F6515051A7E68596_TypeDefinitionIndex = 73591;

class Class_1_A3AC0B6B344CF5CC_Class_3_F6515051A7E68596 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_F6515051A7E68596_ENDINVOKE_OFFSET))(this, a1);
	}
};
