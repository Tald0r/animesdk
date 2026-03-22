#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
class Class_2_922BB448D477278D;
namespace Share { class CRandom; }
namespace Share { template <typename T> class CWeightList_1; }

#define CLASS_1_2A25BE3E27F04DC0_METHOD_1_2FE5532EEDB116C3_OFFSET UNITYSDK_OFFSET(0x114F8DE0)
#define CLASS_1_2A25BE3E27F04DC0_METHOD_1_5AA28A8030E82AA1_OFFSET UNITYSDK_OFFSET(0x114F8DC0)
#define CLASS_1_2A25BE3E27F04DC0_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x114F8DB0)
#define CLASS_1_2A25BE3E27F04DC0_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x114F8DD0)
#define CLASS_1_2A25BE3E27F04DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x114F8D50)

inline static constexpr unsigned int Class_1_2A25BE3E27F04DC0_TypeDefinitionIndex = 16076;

class Class_1_2A25BE3E27F04DC0 : public ::System::Object
{
public:
	::Share::CWeightList_1<::Class_2_922BB448D477278D*>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A25BE3E27F04DC0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A25BE3E27F04DC0_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Share::CWeightList_1<::Class_2_922BB448D477278D*>* Method_1_5AA28A8030E82AA1()
	{
		return ((::Share::CWeightList_1<::Class_2_922BB448D477278D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A25BE3E27F04DC0_METHOD_1_5AA28A8030E82AA1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A25BE3E27F04DC0_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_2FE5532EEDB116C3(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_240*, ::System::Int32>& a1, ::Share::CRandom* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_240*, ::System::Int32>&, ::Share::CRandom*))((::PBYTE)hIl2Cpp + CLASS_1_2A25BE3E27F04DC0_METHOD_1_2FE5532EEDB116C3_OFFSET))(this, a1, a2);
	}
};
