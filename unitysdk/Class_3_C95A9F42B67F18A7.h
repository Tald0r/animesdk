#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A3AC0B6B344CF5CC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_C95A9F42B67F18A7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA67A360)
#define CLASS_3_C95A9F42B67F18A7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA67A3C0)
#define CLASS_3_C95A9F42B67F18A7_INVOKE_OFFSET UNITYSDK_OFFSET(0xA679DC0)
#define CLASS_3_C95A9F42B67F18A7__CTOR_OFFSET UNITYSDK_OFFSET(0xA679DB0)

inline static constexpr unsigned int Class_3_C95A9F42B67F18A7_TypeDefinitionIndex = 60540;

class Class_3_C95A9F42B67F18A7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_C95A9F42B67F18A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C95A9F42B67F18A7_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C95A9F42B67F18A7_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_C95A9F42B67F18A7_ENDINVOKE_OFFSET))(this, a1);
	}
};
