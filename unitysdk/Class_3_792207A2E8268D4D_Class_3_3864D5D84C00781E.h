#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_5CAB9AA46D466E98;
class Class_1_8088D8743C1058EF;
class Class_3_792207A2E8268D4D;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C2F280)
#define CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C2F2F0)
#define CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C2EBE0)
#define CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2EBD0)

inline static constexpr unsigned int Class_3_792207A2E8268D4D_Class_3_3864D5D84C00781E_TypeDefinitionIndex = 67386;

class Class_3_792207A2E8268D4D_Class_3_3864D5D84C00781E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8088D8743C1058EF* a1, ::Class_1_5CAB9AA46D466E98* a2, ::Class_3_792207A2E8268D4D* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8088D8743C1058EF*, ::Class_1_5CAB9AA46D466E98*, ::Class_3_792207A2E8268D4D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8088D8743C1058EF* a1, ::Class_1_5CAB9AA46D466E98* a2, ::Class_3_792207A2E8268D4D* a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8088D8743C1058EF*, ::Class_1_5CAB9AA46D466E98*, ::Class_3_792207A2E8268D4D*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_792207A2E8268D4D_CLASS_3_3864D5D84C00781E_ENDINVOKE_OFFSET))(this, a1);
	}
};
