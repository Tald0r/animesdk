#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFD2BFBAA17829FB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6DE5FBED45BCAC88___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x7E6DBF0)
#define CLASS_2_6DE5FBED45BCAC88___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E6DBA0)
#define CLASS_2_6DE5FBED45BCAC88___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E6DBE0)

inline static constexpr unsigned int Class_2_6DE5FBED45BCAC88___c_TypeDefinitionIndex = 61416;

class Class_2_6DE5FBED45BCAC88___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_FFD2BFBAA17829FB*>** StaticGet___9__55_0()
	{
		return (::System::Comparison_1<::Class_1_FFD2BFBAA17829FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6DE5FBED45BCAC88___c_TypeDefinitionIndex)->GetStaticField(0x31B70);
	}
	static ::Class_2_6DE5FBED45BCAC88___c** StaticGet___9()
	{
		return (::Class_2_6DE5FBED45BCAC88___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6DE5FBED45BCAC88___c_TypeDefinitionIndex)->GetStaticField(0x31B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6DE5FBED45BCAC88___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DE5FBED45BCAC88___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_FFD2BFBAA17829FB* a1, ::Class_1_FFD2BFBAA17829FB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FFD2BFBAA17829FB*, ::Class_1_FFD2BFBAA17829FB*))((::PBYTE)hIl2Cpp + CLASS_2_6DE5FBED45BCAC88___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};
