#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x96CBD90)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x96CBDE0)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x96CBAA0)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x96CBA80)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53_Class_3_039EC88CFCC653F3_3_TypeDefinitionIndex = 76367;

class Class_2_B4E98DED3FBEAE53_Class_3_039EC88CFCC653F3_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_3_039EC88CFCC653F3_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
