#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_68;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38C4D3D10C7EA927_CLASS_1_1338B9EAA78DFE01_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x16C8F9F0)
#define CLASS_1_38C4D3D10C7EA927_CLASS_1_1338B9EAA78DFE01__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8F970)

inline static constexpr unsigned int Class_1_38C4D3D10C7EA927_Class_1_1338B9EAA78DFE01_TypeDefinitionIndex = 9995;

class Class_1_38C4D3D10C7EA927_Class_1_1338B9EAA78DFE01 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_68*>* Field_1_1; // 0x10
	::System::Byte Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38C4D3D10C7EA927_CLASS_1_1338B9EAA78DFE01__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_68*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38C4D3D10C7EA927_CLASS_1_1338B9EAA78DFE01_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}
};
