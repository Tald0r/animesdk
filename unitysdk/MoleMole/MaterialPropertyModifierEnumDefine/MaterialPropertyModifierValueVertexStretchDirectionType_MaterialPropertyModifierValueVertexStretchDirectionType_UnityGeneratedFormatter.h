#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/VertexStretchDirectionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC9D6CF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xC9D6D00)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xC9D6F90)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9D71A0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D7140)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueVertexStretchDirectionType_MaterialPropertyModifierValueVertexStretchDirectionType_UnityGeneratedFormatter_TypeDefinitionIndex = 48190;

	class MaterialPropertyModifierValueVertexStretchDirectionType_MaterialPropertyModifierValueVertexStretchDirectionType_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVertexStretchDirectionType_MaterialPropertyModifierValueVertexStretchDirectionType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C880);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MaterialPropertyModifierEnumDefine::VertexStretchDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyModifierValueVertexStretchDirectionType_MaterialPropertyModifierValueVertexStretchDirectionType_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2C888);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_MATERIALPROPERTYMODIFIERVALUEVERTEXSTRETCHDIRECTIONTYPE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
