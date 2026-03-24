#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_CF36D1B6F6CD4F8B;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1_METHOD_1_059283DA7151F2E4_OFFSET UNITYSDK_OFFSET(0x9C82AA0)
#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x9C829B0)
#define CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9C829A0)

inline static constexpr unsigned int Class_1_6998F362728D4D12_Class_1_2382BB2F65034E69_1_TypeDefinitionIndex = 65038;

class Class_1_6998F362728D4D12_Class_1_2382BB2F65034E69_1 : public ::System::Object
{
public:
	::Class_1_CF36D1B6F6CD4F8B* Field_1_3; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x18
	::System::Action_1<::System::Int32>* Field_1_5; // 0x28
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* Field_1_4; // 0x30
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_059283DA7151F2E4(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_6998F362728D4D12_CLASS_1_2382BB2F65034E69_1_METHOD_1_059283DA7151F2E4_OFFSET))(this, a1);
	}
};
