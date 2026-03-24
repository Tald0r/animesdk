#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_92D28DDE4833EDF9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2EC1FF8A4DE9E178_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x63C9010)
#define CLASS_3_2EC1FF8A4DE9E178_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x63C9190)
#define CLASS_3_2EC1FF8A4DE9E178_1_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x63C91F0)
#define CLASS_3_2EC1FF8A4DE9E178_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x63C8F50)
#define CLASS_3_2EC1FF8A4DE9E178_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x63C9070)
#define CLASS_3_2EC1FF8A4DE9E178_1__CTOR_OFFSET UNITYSDK_OFFSET(0x63C90F0)

inline static constexpr unsigned int Class_3_2EC1FF8A4DE9E178_1_TypeDefinitionIndex = 69933;

class Class_3_2EC1FF8A4DE9E178_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x4A; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_92D28DDE4833EDF9*>* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_2EC1FF8A4DE9E178_1* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_2EC1FF8A4DE9E178_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2EC1FF8A4DE9E178_1_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}
};
