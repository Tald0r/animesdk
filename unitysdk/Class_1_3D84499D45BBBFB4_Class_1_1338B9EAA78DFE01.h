#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_161;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D84499D45BBBFB4_CLASS_1_1338B9EAA78DFE01_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x1588C9B0)
#define CLASS_1_3D84499D45BBBFB4_CLASS_1_1338B9EAA78DFE01__CTOR_OFFSET UNITYSDK_OFFSET(0x1588C930)

inline static constexpr unsigned int Class_1_3D84499D45BBBFB4_Class_1_1338B9EAA78DFE01_TypeDefinitionIndex = 11926;

class Class_1_3D84499D45BBBFB4_Class_1_1338B9EAA78DFE01 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_161*>* Field_1_1; // 0x10
	::System::Byte Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D84499D45BBBFB4_CLASS_1_1338B9EAA78DFE01__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_161*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_161*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D84499D45BBBFB4_CLASS_1_1338B9EAA78DFE01_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}
};
