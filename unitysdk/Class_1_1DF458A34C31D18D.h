#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_218C0117A15C9CB2.h"
#include "unitysdk/System/Object.h"

class Class_1_5A585DEB704A07E2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DF458A34C31D18D_METHOD_1_0FFCA426B159D768_OFFSET UNITYSDK_OFFSET(0x6D05840)
#define CLASS_1_1DF458A34C31D18D_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x6D05650)
#define CLASS_1_1DF458A34C31D18D_METHOD_1_8F16DA0E81312A97_OFFSET UNITYSDK_OFFSET(0x6D05710)
#define CLASS_1_1DF458A34C31D18D_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x6D059E0)
#define CLASS_1_1DF458A34C31D18D__CTOR_OFFSET UNITYSDK_OFFSET(0x6D05640)

inline static constexpr unsigned int Class_1_1DF458A34C31D18D_TypeDefinitionIndex = 59348;

class Class_1_1DF458A34C31D18D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_5A585DEB704A07E2* Field_1_0; // 0x18
	::Enum_3_218C0117A15C9CB2 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF458A34C31D18D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF458A34C31D18D_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_1_8F16DA0E81312A97(::Class_1_5A585DEB704A07E2* a1, ::System::Int32 a2, ::Enum_3_218C0117A15C9CB2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*, ::System::Int32, ::Enum_3_218C0117A15C9CB2))((::PBYTE)hIl2Cpp + CLASS_1_1DF458A34C31D18D_METHOD_1_8F16DA0E81312A97_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FFCA426B159D768(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DF458A34C31D18D_METHOD_1_0FFCA426B159D768_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DF458A34C31D18D_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}
};
