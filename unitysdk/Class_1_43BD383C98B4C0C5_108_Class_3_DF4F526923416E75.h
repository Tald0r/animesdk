#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x66130E0)
#define CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x6613140)
#define CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_INVOKE_OFFSET UNITYSDK_OFFSET(0x6612DA0)
#define CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75__CTOR_OFFSET UNITYSDK_OFFSET(0x6612D90)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_108_Class_3_DF4F526923416E75_TypeDefinitionIndex = 72399;

class Class_1_43BD383C98B4C0C5_108_Class_3_DF4F526923416E75 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* Invoke(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_3D452FA003157C19_Class_0_16E7307DCC43CB2C_1*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108_CLASS_3_DF4F526923416E75_ENDINVOKE_OFFSET))(this, a1);
	}
};
