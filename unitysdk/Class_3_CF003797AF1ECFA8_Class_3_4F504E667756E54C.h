#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1;
class Class_1_663AFC2250EC21C9;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x66B8AB0)
#define CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x66B8B10)
#define CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_INVOKE_OFFSET UNITYSDK_OFFSET(0x66B8770)
#define CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C__CTOR_OFFSET UNITYSDK_OFFSET(0x66B8750)

inline static constexpr unsigned int Class_3_CF003797AF1ECFA8_Class_3_4F504E667756E54C_TypeDefinitionIndex = 81029;

class Class_3_CF003797AF1ECFA8_Class_3_4F504E667756E54C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* Invoke(::System::Int32 a1, ::Class_1_663AFC2250EC21C9* a2)
	{
		return ((::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*(*)(::PVOID, ::System::Int32, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Class_1_663AFC2250EC21C9* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Class_1_663AFC2250EC21C9*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8_CLASS_3_4F504E667756E54C_ENDINVOKE_OFFSET))(this, a1);
	}
};
