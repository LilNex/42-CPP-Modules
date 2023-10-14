/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaiq <ichaiq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:08:24 by ichaiq            #+#    #+#             */
/*   Updated: 2023/10/14 16:28:23 by ichaiq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
    #define MATERIA_SOURCE_HPP

    #include "AMateria.hpp"

    class IMateriaSource
    {
        public:
            virtual ~IMateriaSource() {};
            virtual void learnMateria(AMateria*) = 0;
            virtual AMateria* createMateria(std::string const & type) = 0;
    };

    class MateriaSource : public IMateriaSource
    {
        
        protected:
            AMateria *materials[4];
        
        public:
            MateriaSource();
            MateriaSource(const MateriaSource &obj);
            virtual ~MateriaSource();

            void operator=(const MateriaSource &obj);

            virtual void learnMateria(AMateria *m);
            virtual AMateria *createMateria(std::string const & type);
            
        
    };


#endif